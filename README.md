# Laboratório 2  :computer:
*Uso das ferramentas de desenvolvimento de programas em C++.*

 * Aluno: **Leonardo dos Santos Matos**
 * Matrícula: **20160143879**
 
## Como compilar
No terminal, digite: 
```bash
$ make
```
O makefile está configurado para compilar com todas as flags de warnings e ao final gera um arquivo executável no diretório /bin.

## Como rodar
No terminal, digite:
```bash
$ ./bin/geometria nome_da_figura valor1 valor2 valor3 ... valorn
```
## Há figuras planas e geométricas

Formas | Valores de entrada
------------ | -------------
Quadrado | 1 valor referente aos lados
Retângulo | 2 valores referentes a base e altura respectivamente
Triângulo | 1 valor referente aos lados, já que se trata de um triângulo equilátero
Círculo | 1 valor referente ao diâmetro
Cubo | 1 valor referente aos lados
Paralelepípedo | 3 valores referentes a altura, base, comprimento respectivamente
Pirâmide | 1 valor referente as arestas, já que se trata de faces triangulares equiláteras
Esfera | 1 valor referente ao diâmetro

## Dificuldades

1. Abstrair da melhor maneira as classes
2. Formatar o README
3. Usar o .gitignore para ignorar as pastas e arquivos certos