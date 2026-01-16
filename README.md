# Learning C 🚀



## <p align="left">
  ## <img src="https://img.shields.io/badge/C-00599C?style=for-the-badge&=c&Color=white"  />
## </p> 



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

* ## 🚀 Destaques Técnicos

Este repositório não contém apenas exercícios básicos; ele foca em conceitos avançados de engenharia de software:

* **Gerenciamento de Memória:** Implementação de "vaults" usando `malloc` e alocação dinâmica.
* **Criptografia & Bits:** Manipulação de arquivos via XOR para cifragem de dados.
* **Resiliência de Sistemas:** Tratamento de sinais (`signal handling`) para desligamento seguro (graceful shutdown).
* **Refatoração:** Comparação entre código original e refatorado (projeto SmartPark).

## 📂 Estrutura do Projeto

### 🛠️ Módulos Avançados
* **`04-alocacao-dinamica/`**: Gerenciamento de memória e `vault_malloc.c`.
* **`05-arquivos-e-bits/`**: Cifra XOR e manipulação de arquivos binários.
* **`06-sistemas/`**: Interação com o SO e procedimentos de saída por sinais.

### 🧮 Lógica e Algoritmos (Raiz)
* **`01_calendario_dia_semana.c`**: Cálculo de datas e dias da semana.
* **`02_contar_bissextos.c`**: Algoritmo otimizado para anos bissextos.
* **`tabela_conversao_automatizada.c`**: Automação de conversão de dados.
* **`switch_comportamento_cascata.c`**: Estudo sobre o efeito *fall-through* no switch.

### 🏗️ Projetos e Refatoração
* **SmartPark**: Versão original vs. Versão refatorada para demonstrar melhoria de código.
* **`resiliencia_sinais.c`**: Exemplo prático de como tornar programas C resistentes a interrupções bruscas.





## 📂  Padrões de Robustez e Arquitetura    **🚧 Em Construção**
## 1. **Encapsulamento com Ponteiros Opacos**
Status:🚧 *Desenvolvendo*

Estudo Técnico: Ocultação de Estruturas (Opaque Pointers).

Descrição: Proteger variáveis sensíveis definindo a struct apenas no arquivo .c.

Objetivo: Impedir o acesso direto aos campos internos, respeitando a Lei de Demeter e evitando corrupção de estado.

## 2. Gestão de Erros: O Padrão goto cleanup
Status: 🚧 *Desenvolvendo*

Estudo Técnico: Fluxo de Saída Única (Single Exit Point).

Descrição: Centralizar a liberação de recursos em um único ponto da função.

Objetivo: Garantir 0 Memory Leaks mesmo em funções complexas com múltiplas alocações que podem falhar no meio do processo.

## 3. Objeto Sentinela (Null Object Pattern)
Status: 🚧 *Planejado*

Estudo Técnico: Substituição de Retornos Nulos por instâncias estáticas "Empty".

Descrição: Em vez de retornar NULL, retornar um ponteiro para uma estrutura vazia pré-definida.

Objetivo: Eliminar o excesso de verificações if (ptr != NULL) e prevenir falhas de segmentação (Segfaults).

## 4. Tabelas de Despacho (Ponteiros de Função)
**Status**: 🚧 *Planejado*

*Estudo Técnico*: Extensibilidade e Polimorfismo em C.

*Descrição*: Substituição de estruturas switch-case gigantes por arrays de funções.

*Objetivo*: Aplicar o Open/Closed Principle, facilitando a expansão do código sem alterar o núcleo da lógica.

## 🏗️ Roadmap de Engenharia (Novos Tópicos 2026)
*Módulos adicionais integrados ao meu plano de estudos para dominar a manipulação de dados em baixo nível.*

[ ] Manipulação de Vetores Dinâmicos: Implementação de um sistema de Bound Checking (verificação de limites) manual para evitar Buffer Overflows.

[ ] Recursividade Segura: Algoritmos de busca e ordenação focados na proteção da Stack e definição clara de Casos Base.

[ ] Integridade e Hash: Criação de um utilitário de checksum para validar a integridade de arquivos (ex: protegendo minhas anotações de previsões de sonhos contra alterações).

🛡️ Engenharia de Produção (Status Global) 🚧 *Em Construção*
**Unit Testing (Pasta /tests):** 🚧 *Em Construção*

*Implementação de suítes de teste para validar casos de borda e garantir confiabilidade total.*

**Logging & Observabilidade:** 🚧 *Em Construção*

*Módulo de log com níveis (INFO, WARN, ERROR) e timestamps para monitoramento.*

**Safe Memory Wrappers:** 🚧  *Em Construção*

*Implementação de safe_malloc e safe_free para interceptar falhas de alocação.*

**Documentação Doxygen:** 🚧 *Em Construção*

*Uso do padrão profissional /** ... */ em headers para geração automática de documentação.*






## 🛠️ Como Compilar

Como este repositório lida com arquivos e sistemas, use:

```bash
# Exemplo para compilar com suporte a sinais/threads se necessário
gcc nome_do_arquivo.c -o programa -Wall

# Para os exercícios de arquivos
./programa arquivo_entrada.txt
