/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tales <tales@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/21 21:29:24 by tales             #+#    #+#             */
/*   Updated: 2025/09/22 10:14:17 by tales            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// main.cpp
#include <iostream>
#include "Sobrecarga.hpp"

// ===== ANSI colors =====
#define RESET   "\033[0m"
#define BOLD    "\033[1m"
#define DIM     "\033[2m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"
#define MAGENTA "\033[35m"
#define CYAN    "\033[36m"

// Macro de teste rápida
#define CHECK(cond, msg) do { \
    if (cond) std::cout << GREEN << "[PASS] " << msg << RESET << std::endl; \
    else      std::cout << RED   << "[FAIL] " << msg << RESET << std::endl; \
} while(0)

static void printTitle(const char* t) {
    std::cout << "\n" << BOLD << CYAN << "== " << t << " ==" << RESET << "\n";
}

int main() {
    std::cout << BOLD << MAGENTA << "Sobrecarga — test suite" << RESET << "\n";

    // ----- Construtores -----
    printTitle("Construtores / Getters");
    Sobrecarga A; // default
    CHECK(A.getName() == "Default" && A.getAge() == 0 && A.getOperadorA() == 0 && A.getOperadorB() == 0,
          "Construtor padrão inicia com valores {Default,0,0,0}");

    Sobrecarga B("Tales", 42, 0, 0); // param
    CHECK(B.getName() == "Tales" && B.getAge() == 42 && B.getOperadorA() == 0 && B.getOperadorB() == 0,
          "Construtor com parâmetros {Tales,42,0,0}");

    Sobrecarga C("X", 0, 10, 10);
    CHECK(C.getName() == "X" && C.getAge() == 0 && C.getOperadorA() == 10 && C.getOperadorB() == 10,
          "Construtor com parâmetros {X,0,10,10}");

    // ----- Cópia / Atribuição -----
    printTitle("Cópia / Atribuição");
    Sobrecarga D(C); // copy ctor
    CHECK(D == C, "Construtor de cópia: D == C");

    Sobrecarga E;    // assignment operator
    E = B;
    CHECK(E == B, "operator= : E == B");

    // ----- Setters -----
    printTitle("Setters");
    A.setName("Alpha");
    A.setAge(1);
    CHECK(A.getName() == "Alpha" && A.getAge() == 1, "setName/setAge atualizam corretamente");

    // ----- operator+ -----
    printTitle("operator+");
    // seu operator+ cria "Result", age=0 e soma A/B component-wise
    Sobrecarga F = B + C; // (0,0) + (10,10) -> (10,10)
    std::cout << DIM << "B + C => " << RESET << F << "\n";
    CHECK(F.getOperadorA() == 10 && F.getOperadorB() == 10, "B+C soma campos A/B");
    CHECK(F.getName() == "Result" && F.getAge() == 0, "B+C define {name='Result', age=0}");

    Sobrecarga G = C + C; // (10,10)+(10,10)->(20,20)
    std::cout << DIM << "C + C => " << RESET << G << "\n";
    CHECK(G.getOperadorA() == 20 && G.getOperadorB() == 20, "C+C => (20,20)");

    // ----- operator- -----
    printTitle("operator-");
    Sobrecarga H = C - B; // (10,10) - (0,0) -> (10,10)
    std::cout << DIM << "C - B => " << RESET << H << "\n";
    CHECK(H.getOperadorA() == 10 && H.getOperadorB() == 10, "C-B => (10,10)");

    Sobrecarga I = C - D; // D==C -> (10,10)-(10,10)->(0,0)
    std::cout << DIM << "C - D => " << RESET << I << "\n";
    CHECK(I.getOperadorA() == 0 && I.getOperadorB() == 0, "C-D => (0,0)");

    // ----- operator+= -----
    printTitle("operator+=");
    Sobrecarga J = B; // (0,0)
    J += C;           // -> (10,10)
    std::cout << DIM << "J (B) += C => " << RESET << J << "\n";
    CHECK(J.getOperadorA() == 10 && J.getOperadorB() == 10, "B+=C soma in-place");

    // ----- operator== -----
    printTitle("operator==");
    CHECK(C == D, "C == D (cópia)");
    CHECK(!(B == C), "B != C");

    // ----- operator< -----
    printTitle("operator< (ordenação por A e desempate por B)");
    CHECK(B < C, "B<C (0<10)");
    CHECK(!(C < B), "!(C<B) (10 !< 0)");
    // empate em A, desempata por B
    Sobrecarga K("Y", 0, 10, 5);
    Sobrecarga L("Z", 0, 10, 7);
    CHECK(K < L, "K<L quando A é igual (10==10) e 5<7 pelo B");

    // ----- operator<< -----
    printTitle("operator<< (formatação atual)");
    std::cout << DIM << "B => " << RESET << B << "\n";
    std::cout << DIM << "C => " << RESET << C << "\n";
    std::cout << DIM << "F => " << RESET << F << "\n";

    std::cout << "\n" << BOLD << GREEN << "Fim dos testes." << RESET << std::endl;
    return 0;
}
