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

* ## 🛡️ Módulos de Cibersegurança e Engenharia Reversa

### 4. [Gestão Segura de Memória e Wiping](./04_memory_safety_wiping.c)
* **O que o código faz:** Implementa alocação dinâmica com limpeza obrigatória de rastros na RAM.
* **Estudo Técnico: Mitigação de Memory Dump**
    * **Wiping:** Uso de `memset(ptr, 0, size)` antes do `free()` para apagar dados sensíveis, evitando que informações permaneçam na memória após o encerramento do programa (ataques de Cold Boot).
    * **Anti-Dangling:** Anulação imediata do ponteiro (`ptr = NULL`) após a liberação para prevenir vulnerabilidades de acesso a endereços inválidos.



### 5. [Motor de Criptografia XOR & Binary I/O](./05_xor_crypto_engine.c)
* **O que o código faz:** Cifrador simétrico de alta performance que processa arquivos byte a byte.
* **Estudo Técnico: Manipulação Bruta de Bits (Bitwise)**
    * **Simetria XOR:** Aplicação do operador `^` para criptografia rápida em nível de hardware.
    * **Integridade Binária:** Diferenciação entre os modos `"r"` e `"rb"` para garantir que o compilador não corrompa bytes de arquivos não-texto (como imagens e chaves).



---

## 🏗️ Arquitetura e Padrões Profissionais (Clean Code)

### 6. [Encapsulamento com Opaque Pointers](./06_opaque_pattern/)
* **Estudo Técnico: Princípio do Menor Conhecimento (Lei de Demeter)**
    * **O que aprendi:** Como esconder a definição de uma `struct` no arquivo `.c` e expor apenas a interface no `.h`. Isso impede o acoplamento excessivo e protege a lógica interna contra interferências externas.



### 7. [Resiliência: Tratamento de Sinais de Sistema](./07_signal_handling_resilience.c)
* **Estudo Técnico: Graceful Shutdown (Fechamento Elegante)**
    * **O que aprendi:** Uso da biblioteca `<signal.h>` para capturar interrupções (`Ctrl+C`) e garantir que o programa execute rotinas de limpeza de RAM e fechamento de arquivos antes de encerrar.



---

## 🛠 Diferenciais Aplicados nestes Estudos
* **Early Return:** Tratamento de erros no início das funções para manter o código linear e evitar aninhamentos excessivos.
* **Memory Safety:** Foco rigoroso na prevenção de *Buffer Overflows* e *Memory Leaks*.
* **Interoperabilidade:** Uso de `__attribute__((packed))` em structs para garantir compatibilidade de memória em integrações com outras linguagens (JNI/Java).
