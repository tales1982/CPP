# 📚 Principais Bibliotecas da STL

A STL é composta por diversos headers que fornecem funcionalidades específicas. Aqui estão alguns dos principais:

## Contêineres
- `<array>`: Contêiner de tamanho fixo.
- `<vector>`: Vetor dinâmico.
- `<deque>`: Fila de duas pontas.
- `<list>`: Lista duplamente encadeada.
- `<forward_list>`: Lista simplesmente encadeada.
- `<set>` / `<multiset>`: Conjuntos ordenados.
- `<map>` / `<multimap>`: Mapas ordenados.
- `<unordered_set>` / `<unordered_map>`: Versões não ordenadas baseadas em hash.

## Algoritmos
- `<algorithm>`: Funções para busca, ordenação, etc.
- `<numeric>`: Operações numéricas, como `accumulate`.

## Iteradores
- `<iterator>`: Ferramentas para trabalhar com iteradores.

## Utilitários
- `<utility>`: Funções utilitárias como `std::pair`.
- `<functional>`: Funções e objetos funcionais.

## Outros
- `<string>`: Manipulação de strings.
- `<memory>`: Gerenciamento de memória, como smart pointers.
- `<thread>`: Suporte a multithreading.



# ✅ 1. Métodos Gerais de Containers
- Estes métodos são comuns à maioria dos containers da STL:
```
--Método--                    -----Descrição-----
- begin()              -->    Retorna iterador para o início do container
- end()                -->    Retorna iterador para o final (posição após o último)
- cbegin() / cend()    -->    Versões constantes de begin() e end()
- rbegin() / rend()    -->	  Iteradores reversos (do fim ao início)
- size()               -->    Retorna número de elementos
- empty()              -->    Verifica se o container está vazio
- clear                -->    Remove todos os elementos
- insert               -->    Insere um ou mais elementos
- erase                -->	  Remove elemento(s)
- find                 -->    Busca um elemento (disponível em map, set, etc.)
- count                -->    Conta ocorrências de um valor (em map, set, etc.)
```

## ✅ 2. Métodos específicos por container
```
==========================================  std::vector ==========================================   
--Método--     	                --Descrição--
- push_back()       -->     Adiciona elemento no fim
- pop_back()        -->     Remove o último elemento
- at(index)         -->     Acesso seguro com verificação de limites
- operator[]        -->     Acesso direto sem verificação
- resize()          -->     Redimensiona o vetor
- capacity()        -->     Mostra a capacidade atual de armazenamento
- shrink_to_fit()   -->     Reduz a capacidade para caber os elementos

================================== std::list / std::forward_list =================================
--Método--     	                --Descrição--
- push_front()      -->     Insere no início
- push_back()       -->     Insere no final (std::list apenas)
- pop_front()       -->     Remove do início
- pop_back()        -->     Remove do final (std::list apenas)
- sort()            -->     Ordena a lista
- unique()          -->     Remove elementos duplicados consecutivos
- merge()           -->     Mescla com outra lista ordenada
- reverse()         -->     Inverte a ordem dos elementos

 ================================= std::map / std::unordered_map =================================
--Método--     	                --Descrição--
- insert()          -->     Insere par chave-valor
- emplace()         -->     Insere mais eficientemente (sem cópia)
- find(key)         -->     Retorna iterador para chave, ou end()
- count(key)        -->     Retorna 1 se a chave existe, 0 caso contrário
- operator[]        -->     Acesso ou inserção de chave
- erase(key/it)     -->     Remove item por chave ou iterador

 ================================= std::set / std::unordered_set =================================
--Método--     	                --Descrição--
- insert()          -->     Insere um elemento
- emplace()         -->     Cria e insere diretamente
- find()            -->     Busca o elemento
- count()           -->     Retorna 1 se o valor existe, senão 0
- erase()           -->     Remove elemento
```



## ✅ 3. Funções da STL (algoritmos)
- Incluídas no header <algorithm>:
```
- Função            -->         Descrição
- std::find()       -->         Busca um valor
- std::sort()       -->         Ordena elementos
- std::reverse()    -->         Inverte a ordem
- std::count()      -->         Conta quantas vezes um valor aparece
- std::for_each()   -->         Aplica função a cada elemento
- std::copy()       -->         Copia de um container para outro
- std::transform()  -->         Transforma elementos com base em uma função
- std::accumulate() -->         Soma elementos (em <numeric>)
- std::all_of()     -->         Verifica se todos satisfazem condição
- std::any_of()     -->         Verifica se algum satisfaz a condição
- std::none_of()    -->         Verifica se nenhum satisfaz a condição
```
## ✔ Resumo
- Header	O que contém
```
<algorithm>	Funções genéricas (sort, find, reverse, etc.)
<numeric>	Operações numéricas como accumulate
<iterator>	Funções e utilitários para iteradores
<vector>, <map> etc.	Métodos dos containers (push_back, size, etc.)
```

### Site com uma boa explicacao em portugues:
```
https://www.slideshare.net/mcastrosouza/maratona-de-programao-com-stl#1
```