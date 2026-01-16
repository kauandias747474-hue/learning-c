# Learning C 🚀



### 🛠 Domínio de Sintaxe e Lógica em C



Este repositório é meu **laboratório de engenharia**. Aqui documento comportamentos específicos da linguagem C, indo além da lógica básica e explorando o funcionamento interno do compilador, a eficiência matemática e a resolução de problemas através de exercícios práticos.



---



## 🧪 Estudos Técnicos e Exercícios



### 1. [Calendário: Cálculo do Dia da Semana](./01_calendario_dia_semana.c)

* **O que o código faz:** Identifica o dia da semana para qualquer data pós-1600.

* **Estudo Técnico: Comportamento Cascata (Fall-through)**

    * A estrutura `switch` utilizada aqui serve para estudar o controle de fluxo do compilador.

    * **O que aprendi:** Em C, o `switch` executa sequencialmente. Sem o `break`, ele "atravessa" os outros casos. Entender isso é vital para evitar bugs de lógica.



### 2. [Contador de Bissextos Otimizado](./02_logica_bissextos_aritmetica.c)

* **O que o código faz:** Calcula bissextos entre dois anos usando a fórmula: $(X/4) - (X/100) + (X/400)$.

* **Estudo Técnico: Aritmética de Tempo Constante O(1)**

    * **O que aprendi:** Como substituir laços de repetição (`for`/`while`) por fórmulas matemáticas diretas. Isso prova que a aritmética resolve problemas de contagem de forma instantânea, otimizando o processador.



### 📝 Exercício Prático: [SmartPark - Sistema de Estacionamento](./03_smartpark_sistema_testes.c)

* **Objetivo do Exercício:** Aplicar os conhecimentos de C em um cenário real de lógica de negócios (tarifação de estacionamento).

* **Foco do Exercício:** * **Normalização de Dados:** Converter horas e minutos para uma unidade única (minutos totais) para simplificar cálculos de intervalo.

    * **Tratamento de Exceções:** Lógica para lidar com a "virada de dia" (quando o veículo entra às 23h e sai às 01h).

    * **Regras de Cobrança:** Implementação de arredondamento





## 📂 Exercícios de Lógica e Fundamentos

🌡️**Estudo de Caso:** Conversor de Temperatura Automatizado

**Status:** Exercício de Refatoração e Lógica Aplicada.



Este projeto foi desenvolvido como um exercício prático para aplicar técnicas avançadas de programação em C, evoluindo um algoritmo simples de conversão para uma estrutura profissional e robusta.



O Desafio do Exercício: O objetivo era substituir um código manual e repetitivo por uma solução automatizada que resolvesse problemas de compatibilidade entre sistemas operacionais (Windows/Linux).



Competências Testadas e Aplicadas:



**Automação com Laços (for):** 

* Teste de lógica para geração de tabelas em série, reduzindo drasticamente o volume de linhas de código.



**Refatoração para Clean Code:**  

* Substituição de variáveis genéricas por nomes significativos.

* Criação de funções com responsabilidade única (Modularização).



**Uso de #define para eliminar "números mágicos", facilitando a manutenção do teste.**



**Portabilidade (Diretivas de Pré-processamento):**

* Implementação de #ifdef _WIN32 para validar o comportamento do programa em múltiplos ambientes, corrigindo o erro comum de comandos de sistema não encontrados.



**Interface vs. Lógica:** 

* Separação da lógica matemática da função de exibição, um princípio fundamental da engenharia de software.

## 📂 Destaques de Aprendizado (Novos Módulos)

Abaixo estão os detalhes sobre os três últimos tópicos que implementei:

### 1. Criptografia de Arquivos (Cifra XOR)
- **O que faz:** Utiliza a operação lógica `^` (XOR) para processar bytes de um arquivo e gerar uma versão cifrada.
- **Conceito:** Manipulação de arquivos (`FILE*`), leitura binária (`rb/wb`) e operações bitwise.
- **Localização:** `05-arquivos-e-bits/cifra_xor.c`

### 2. Gerenciamento de Memória (Vault)
- **O que faz:** Cria uma estrutura de dados "cofre" (Vault) usando alocação dinâmica.
- **Conceito:** Uso de `malloc` para reservar memória na **Heap**, ponteiros para structs e a importância do `free` para evitar *memory leaks*.
- **Localização:** `04-alocacao-dinamica/vault_malloc.c`

### 3. Resiliência e Sinais do Sistema
- **O que faz:** Intercepta o sinal de interrupção do teclado (Ctrl+C) para realizar uma limpeza de emergência antes de fechar o programa.
- **Conceito:** Uso da biblioteca `<signal.h>`, tratamento de interrupções e programação de sistemas.
- **Localização:** `06-sistemas/signal_handling.c`

## 📂 Padrões de Robustez e Arquitetura (Engenharia de Software)

### 1. Encapsulamento com Ponteiros Opacos
* **O exercício:** Criação de um módulo de "Conta Bancária" ou "Cofre" onde os dados internos são invisíveis para o programa principal.
* **Estudo Técnico:** Ocultação de Estruturas (struct oculta).
* **O que aprendi:** Como proteger variáveis sensíveis. Ao definir a `struct` apenas no `.c`, impeço que o utilizador altere valores diretamente, forçando o uso de funções seguras. Isso evita bugs de estado corrompido e respeita a **Lei de Demeter**.

### 2. Gestão de Erros: O Padrão `goto cleanup`
* **O exercício:** Processador de arquivos que aloca memória e abre múltiplos documentos simultaneamente.
* **Estudo Técnico:** Fluxo de Saída Única (*Single Exit Point*).
* **O que aprendi:** Como simular um bloco `finally`. Centralizo a limpeza de recursos (memória e arquivos) no final da função, garantindo **0 Memory Leaks** mesmo quando ocorrem erros no meio do processo.



### 3. Objeto Sentinela (Null Object Pattern)
* **O exercício:** Sistema de busca em listas de contatos ou base de dados.
* **Estudo Técnico:** Substituição de Retornos Nulos.
* **O que aprendi:** Retornar `NULL` causa crashes (*Segfaults*). Aprendi a retornar um ponteiro para um objeto "Vazio" constante, permitindo que o programa continue a rodar sem precisar de verificações `if` excessivas.

### 4. Tabelas de Despacho (Dispatch Tables)
* **O exercício:** Substituição de um menu de comandos com `switch-case` por um array de ponteiros de função.
* **Estudo Técnico:** Extensibilidade e Polimorfismo em C.
* **O que aprendi:** Como tratar funções como dados. Isso permite adicionar novas funcionalidades ao sistema sem alterar o código principal, mantendo as funções pequenas e especializadas.



---

## 🧪 Estudos Técnicos e Exercícios de Lógica

### 1. Calendário: Cálculo do Dia da Semana
* **Estudo:** Comportamento Cascata (*Fall-through*) no `switch`.
* **O que aprendi:** Como o compilador executa o fluxo sequencial e como tirar proveito disso para lógica de datas pós-1600.

### 2. Contador de Bissextos Otimizado
* **Estudo:** Aritmética de Tempo Constante $O(1)$.
* **O que aprendi:** Substituir laços de repetição (for/while) por fórmulas matemáticas diretas, otimizando o processamento. Fórmula: `(X/4)−(X/100)+(X/400)`.

### 3. SmartPark: Sistema de Estacionamento
* **Foco:** Normalização de dados (conversão para minutos totais) e tratamento de exceções em lógica de negócios (virada do dia).

---

## 🛡️ Qualidade e Profissionalização (Freela & Mercado)

* **Logging System:** Implementação de logs com níveis (`INFO`, `WARN`, `ERROR`) para monitoramento em produção.
* **Safe Memory Wrappers:** Funções `safe_malloc` que verificam falhas de alocação e interrompem o programa de forma controlada.
* **Unit Testing:** Pasta `/tests` dedicada a validar casos de borda e garantir a confiabilidade das funções matemáticas.
* **Doxygen Documentation:** Código comentado no padrão profissional para geração automática de manuais técnicos.

---

## ✅ Garantia de Qualidade
* **Memory Safe:** Todos os módulos são validados com **Valgrind** (0 leaks).
* **Compilação Rigorosa:** Uso de flags `-Wall -Wextra -Wpedantic` para garantir o padrão ANSI/ISO C.
