# 🛠 Domínio de Sintaxe e Lógica em C

Este repositório é meu laboratório de engenharia. Aqui documento comportamentos específicos da linguagem C, indo além da lógica básica.

## 🧪 Estudo Técnico: Comportamento Cascata (Fall-through)
O arquivo `estudo_switch_fallthrough.c` demonstra o controle de fluxo do compilador na estrutura `switch`.

- **O que aprendi:** Em C, o `switch` executa sequencialmente a partir do primeiro `case` verdadeiro. Sem o `break`, ele "atravessa" os outros casos.
- **Aplicação:** Entender esse comportamento é vital para evitar bugs de lógica e para otimizar códigos onde múltiplos estados compartilham a mesma saída.
