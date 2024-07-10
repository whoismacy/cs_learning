num1 = 0
num2 = 1
print(num1)
print(num2)

for fibonacci in range(18):
    new_fibonacci = num1 + num2
    print(new_fibonacci)
    num1 = num2
    num2 = new_fibonacci
