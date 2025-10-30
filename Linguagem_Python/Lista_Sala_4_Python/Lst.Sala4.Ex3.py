A = []
B = []
C = []

for i in range(5):
    A.append(int(input("Entre com um valor para A: ")))
for i in range(5):
    B.append(int(input("Entre com um valor para B: ")))
for i in range(5):
    C.append(A[i] - B[i])

print("O vetor C é:", C)

