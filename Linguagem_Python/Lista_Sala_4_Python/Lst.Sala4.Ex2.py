import math

A = []
B = []

for i in range(5):
    A.append(int(input("Entre com um valor: ")))
    B.append(math.factorial(A[i]))      
    print("O vetor B é:", B[i])



