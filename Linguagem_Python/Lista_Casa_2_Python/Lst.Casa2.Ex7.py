# Python não possui um switch-case nativo como outras linguagens (Java, C++). 
C = int(input("Entre com o número entre 1 e 5: "))

if(C == 1):
    print("O curso é: Engenharia ")
elif(C == 2):
    print("O curso é: Edificações")
elif(C == 3):
    print("O curso é: Sistemas Elétricos")
elif(C == 4):
    print("O curso é: Turismo")
elif(C == 5):
    print("O curso é: Análise de Sistemas")
else:
    print("Curso não encontrado")