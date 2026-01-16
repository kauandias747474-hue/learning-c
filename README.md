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

Entendido! Fiz o ajuste para refletir que a seção de Robustez e Arquitetura é o seu foco atual de desenvolvimento (Work in Progress). No mundo do software, ser transparente sobre o que está "em construção" é um sinal de senioridade, pois mostra que você tem um plano de estudo estruturado.

Aqui está a sugestão de como atualizar seu README agora:

📂 Padrões de Robustez e Arquitetura 🚧 Em Construção
Nesta seção, estou implementando padrões de design que elevam a segurança e a manutenibilidade do código em C.

Encapsulamento com Ponteiros Opacos

Status: 🚧 Desenvolvendo

Estudo Técnico: Ocultação de Estruturas (Opaque Pointers).

Objetivo: Proteger variáveis sensíveis definindo a struct apenas no arquivo .c, impedindo o acesso direto aos campos e respeitando a Lei de Demeter.

Gestão de Erros: O Padrão goto cleanup

Status: 🚧 Desenvolvendo

Estudo Técnico: Fluxo de Saída Única (Single Exit Point).

Objetivo: Simular o comportamento de um bloco finally. Centralizar a liberação de recursos para garantir 0 Memory Leaks em qualquer cenário de falha.

Objeto Sentinela (Null Object Pattern)

Status: 🚧 Planejado

Estudo Técnico: Substituição de Retornos Nulos por instâncias estáticas "Empty".

Objetivo: Reduzir a necessidade de múltiplos if (ptr != NULL) e prevenir falhas de segmentação (Segfaults).

Tabelas de Despacho (Ponteiros de Função)

Status: 🚧 Planejado

Estudo Técnico: Extensibilidade e Polimorfismo.

Objetivo: Aplicar o Open/Closed Principle, permitindo adicionar funcionalidades sem alterar o núcleo do sistema.

🏗️ Roadmap de Engenharia (Novos Tópicos 2026)
Módulos adicionais integrados ao meu plano de estudos para dominar a manipulação de dados em baixo nível:

[ ] Manipulação de Vetores Dinâmicos: Criação de um array resiliente com verificação de limites (Bound Checking).

[ ] Recursividade Segura: Implementação de algoritmos de busca (Binary Search) focados em controle de Stack.

[ ] Integridade e Hash: Script para gerar a "digital única" de arquivos (ex: protegendo minhas anotações de previsões de sonhos contra alterações).
