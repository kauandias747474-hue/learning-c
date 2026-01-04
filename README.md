# Learning C 🚀

### 🛠 Domínio de Sintaxe e Lógica em C

Este repositório é meu **laboratório de engenharia**. Aqui documento comportamentos específicos da linguagem C, indo além da lógica básica e explorando o funcionamento interno do compilador, a eficiência matemática, a normalização de dados e o controle de fluxo.

---

## 🧪 Estudos Técnicos e Exercícios (Documentação Geral)

### 1. [Calendário: Cálculo do Dia da Semana](./01_calendario_dia_semana.c)
* **O que o código faz:** Recebe uma data (dia, mês e ano) e identifica o dia da semana correspondente, utilizando o ano de 1600 como âncora histórica.
* **Lógica de Engenharia:** Implementa o deslocamento acumulado de dias, tratando manualmente meses de 31 dias e a compensação crítica de Fevereiro através de operadores de módulo `%`.
* **Estudo Técnico: Comportamento Cascata (Fall-through)**
    * A estrutura `switch` utilizada para exibir os resultados demonstra o controle de fluxo do compilador.
    * **O que aprendi:** Em C, o `switch` executa sequencialmente a partir do primeiro `case` verdadeiro. Sem o `break`, o fluxo "atravessa" (fall-through) os casos seguintes.
    * **Aplicação:** Vital para evitar bugs de lógica e otimizar códigos onde múltiplos estados compartilham a mesma saída.

### 2. [Contador de Bissextos Otimizado](./02_logica_bissextos_aritmetica.c)
* **O que o código faz:** Calcula a quantidade exata de anos bissextos entre dois anos fornecidos pelo usuário.
* **Lógica Matemática:** Implementação baseada na fórmula: $Total = (X/4) - (X/100) + (X/400)$.
* **Estudo Técnico: Aritmética de Tempo Constante O(1)**
    * **O que aprendi:** Como utilizar a divisão inteira do C para substituir laços de repetição (`for` ou `while`) que seriam custosos ao processador em intervalos grandes.
    * **Destaque:** Este exercício prova que a aritmética pura pode resolver problemas de contagem instantaneamente, eliminando a complexidade linear e otimizando o uso do hardware.

### 3. [SmartPark: Sistema de Bilhetagem e Testes](./03_smartpark_sistema_testes.c)
* **O que o código faz:** Gestão de tarifas de estacionamento com lógica de arredondamento e tratamento de horas/minutos.
* **Estudo Técnico: Normalização de Dados e Tratamento de Transição**
    * **O que aprendi:** A importância de normalizar dados temporais para uma unidade única (minutos totais) para simplificar cálculos complexos de intervalos.
    * **Tratamento de Exceção (Virada de Dia):** O código resolve o cenário crítico de entrada e saída em dias diferentes (ex: entrada 23:50 e saída 00:10), ajustando o delta de tempo automaticamente (+1440 min).
    * **Cenário de Teste:** O sistema valida o arredondamento de "hora cheia", onde qualquer fração de minuto excedente após a primeira hora é contabilizada integralmente na tarifa.

---

## 🚀 Como Executar os Experimentos

Para rodar qualquer um dos laboratórios localmente, utilize um compilador C (GCC recomendável):

1. **Clone o repositório:**
   ```bash
   git clone [https://github.com/kauandias747474-hue/learning-c.git](https://github.com/kauandias747474-hue/learning-c.git)
