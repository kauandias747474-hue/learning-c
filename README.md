**Learning C 🚀**
🛠 Domínio de Sintaxe e Lógica em C
Este repositório é meu laboratório de engenharia. Aqui documento comportamentos específicos da linguagem C, indo além da lógica básica e explorando o funcionamento interno do compilador, a eficiência matemática e a gestão rigorosa de recursos.

🧪 Estudos Técnicos e Exercícios
1. Calendário: Cálculo do Dia da Semana
Estudo Técnico: Comportamento Cascata (Fall-through)

O que aprendi: Controle de fluxo sequencial no switch. Vital para evitar bugs de lógica em sistemas de decisão.

2. Contador de Bissextos Otimizado
Estudo Técnico: Aritmética de Tempo Constante O(1)

O que aprendi: Substituição de laços por fórmulas matemáticas diretas, otimizando o processador ao máximo.

3. Vault: Gestão de Objetos no Heap
Estudo Técnico: Alocação Dinâmica e Abstração de Tipos

O que aprendi: Uso de malloc para persistência de dados além do escopo da função. Implementação de typedef para criação de uma API limpa e gerenciamento de ciclo de vida de objetos (nascimento, uso e liberação via free).

🛡️ Módulos de Cibersegurança e Engenharia Reversa
4. Gestão Segura de Memória e Wiping
Estudo Técnico: Mitigação de Memory Dump

Wiping: Uso de memset antes do free() para apagar dados sensíveis da RAM.

Anti-Dangling: Anulação imediata do ponteiro (ptr = NULL) para prevenir acessos a endereços inválidos.

5. Motor de Criptografia XOR & Binary I/O
Estudo Técnico: Manipulação Bruta de Bits (Bitwise)

O que aprendi: Aplicação do operador ^ para criptografia em nível de hardware e garantia de integridade em arquivos binários ("rb"/"wb").

🏗️ Arquitetura e Padrões Profissionais (Clean Code)
6. Encapsulamento com Opaque Pointers
Estudo Técnico: Princípio do Menor Conhecimento

O que aprendi: Ocultação de structs em arquivos .c, expondo apenas interfaces no .h para reduzir o acoplamento.

7. Resiliência: Tratamento de Sinais de Sistema
Estudo Técnico: Graceful Shutdown (Fechamento Elegante)

O que aprendi: Captura de interrupções (SIGINT) para garantir limpeza de RAM antes do encerramento forçado.

🛠 Diferenciais de Engenharia Aplicados
Early Return: Tratamento de erros no início das funções para evitar aninhamentos complexos.

Memory Safety: Foco preventivo em Buffer Overflows e Memory Leaks.

Portabilidade: Uso de diretivas de pré-processamento (#ifdef _WIN32) para garantir execução multiplataforma.
