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
