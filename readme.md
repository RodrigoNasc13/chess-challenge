# 🏰 Simulador de Movimentos de Xadrez - Nível Mestre

Um programa em C que simula movimentos avançados das peças de xadrez utilizando **recursividade** e **loops complexos aninhados**.

## 📋 Descrição do Projeto

Este projeto implementa um simulador de movimentos para quatro peças do xadrez:
- **Torre** 🏰 - Movimento horizontal/vertical
- **Bispo** ⛪ - Movimento diagonal  
- **Rainha** 👑 - Movimento em todas as direções
- **Cavalo** 🐎 - Movimento em "L"

### 🎯 Objetivos Acadêmicos

- Aplicar **recursividade** em funções
- Implementar **loops complexos aninhados**
- Usar estruturas de controle (`break`, `continue`)
- Simular movimentos específicos do xadrez

## 🚀 Funcionalidades

### Torre (Recursiva)
```
Movimento: 5 casas → direita
Técnica: Recursividade
Saída: Direita (5x)
```

### Bispo (Recursiva + Loops Aninhados)
```
Movimento: 5 casas diagonal
Técnica: Recursividade + loops aninhados
Saída: Cima + Direita (5x)
```

### Rainha (Recursiva)
```
Movimento: 8 casas ← esquerda
Técnica: Recursividade
Saída: Esquerda (8x)
```

### Cavalo (Loops Complexos)
```
Movimento: "L" (2↑ + 1→)
Técnica: Loops aninhados complexos
Saída: Cima + Cima + Direita (3x)
```

## 💻 Como Executar

### Pré-requisitos
- Compilador C (GCC recomendado)
- Sistema Windows/Linux/macOS

### Compilação e Execução
```bash
# Compilar
gcc -o chess chess.c

# Executar
./chess
```

### No Windows
```cmd
gcc chess.c -o chess.exe
chess.exe
```

## 📊 Exemplo de Saída

```
=== MOVIMENTACAO DAS PECAS DE XADREZ - NIVEL MESTRE ===

Torre movendo 5 casas para a direita (recursivo):
Direita
Direita
Direita
Direita
Direita

Bispo movendo 5 casas na diagonal (recursivo com loops aninhados):
Cima
Direita
Cima
Direita
Cima
Direita
Cima
Direita
Cima
Direita

Rainha movendo 8 casas para a esquerda (recursivo):
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda
Esquerda

Cavalo movendo em 'L' (2 cima, 1 direita) com recursividade e loops complexos:
Cima
Cima
Direita
```

## 🏗️ Estrutura do Código

### Funções Principais

| Função | Técnica | Descrição |
|--------|---------|-----------|
| `mover_torre_recursivo()` | Recursividade | Move torre horizontalmente |
| `mover_bispo_recursivo()` | Recursividade + Loops | Move bispo diagonalmente |
| `mover_rainha_recursivo()` | Recursividade | Move rainha em linha reta |
| `mover_cavalo_recursivo()` | Loops Complexos | Move cavalo em "L" |

### Conceitos Aplicados

- ✅ **Recursividade**: Funções que chamam a si mesmas
- ✅ **Loops Aninhados**: Estruturas de repetição dentro de outras
- ✅ **Controle de Fluxo**: `break` e `continue`
- ✅ **Múltiplas Condições**: Lógica complexa de decisão

## 🎓 Conceitos de Programação

### Recursividade
```c
void mover_torre_recursivo(int casas_restantes) {
    // Caso base
    if (casas_restantes <= 0) {
        return;
    }
    
    printf("Direita\n");
    
    // Chamada recursiva
    mover_torre_recursivo(casas_restantes - 1);
}
```

### Loops Complexos Aninhados
```c
// Loop externo (fases)
for (int fase = 1; fase <= 2; fase++) {
    if (fase == 1) {
        // Loop interno (vertical)
        for (int vertical = 1; vertical <= casas_verticais; vertical++) {
            // Lógica complexa com break/continue
        }
    }
}
```

## ⚙️ Configurações

### Modificar Número de Movimentos
```c
int casas_torre = 5;    // Torre: 5 casas
int casas_bispo = 5;    // Bispo: 5 casas
int casas_rainha = 8;   // Rainha: 8 casas  
int casas_cavalo = 3;   // Cavalo: 3 movimentos "L"
```

## 📚 Requisitos Técnicos

### Funcionais
- ✅ Recursividade para Torre, Bispo e Rainha
- ✅ Loops complexos para Cavalo
- ✅ Loops aninhados para Bispo
- ✅ Saída formatada no console

### Não Funcionais
- ✅ **Performance**: Execução eficiente
- ✅ **Documentação**: Código bem comentado
- ✅ **Legibilidade**: Estrutura clara e organizada

## 👥 Autor

Trabalho acadêmico desenvolvido para a disciplina de Programação em C.

## 📄 Licença

Este projeto é desenvolvido para fins educacionais.

---

*Projeto desenvolvido como parte dos estudos em Ciência da Computação*