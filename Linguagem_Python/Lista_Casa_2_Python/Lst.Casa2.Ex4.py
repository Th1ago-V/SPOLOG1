A = int(input("Entre com um número: "))
B = int(input("Entre com um número: "))
C = int(input("Entre com um número: "))

nums = [A, B, C]
max = max(nums)
min = min(nums)

if(max != C and min != C):
    mei = C
elif(max != B and min != B):
    mei = B
else:
    mei = A

print("O maior é: ", max)
print("O menor é: ", min)
print("O medio é: ", mei)