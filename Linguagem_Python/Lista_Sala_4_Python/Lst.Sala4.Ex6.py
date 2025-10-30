A = []
B = []

for i in range(5):
    A.append(int(input("Entre com um valor: ")))
    B.append(A[i] * A[i])

print("O vetor B é:", B)
