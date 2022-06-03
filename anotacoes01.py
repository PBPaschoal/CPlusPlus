# -- coding: utf-8 --

#Operadores matemáticos:

"""
Operador            Operação
   +                Adição
   -			    Subtração
   *			    Multiplicação
   /				Divisão
   **				Exponenciação
   %				Módulo

Operador de atribuição:

=

x = 10
Se lê "x recebe o valor 10"

Operadores relacionais:

Operador            Operação
  ==				Igual
  !=				Diferente
  >					Maior
  <					Menor
  >=				Maior ou igual
  <=				Divisão
"""
#Exemplo:

x = 2
y = 3

print(x == y) #False

"""
Operadores Lógicos:
Operador							Operação
  AND					Duas condições sejam verdadeiras
  OR 					Pelo menos uma condição seja verdadeira
  NOT					Inverte o valor
"""
#Exemplo:

print(x + y == 5 and y - x == 1)

"""
Comando condicional if
Realiza testes condicionais
Executa um bloco SE uma determinada condição for atendida
Avalia se condição é verdadeira ou não

Bloco
Trecho de código que depende de outro trecho
Observe que a linha 7 não é executada
"""
a = 5
b = 6

if a > b:
	print(a, " é maior do que ", b)

if a < b:
	print(a, " é menor do que ", b)