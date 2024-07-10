print(0)
print(1)
count = 0
# prints the fibonacci numbers (num1 should be the lower number parameter while num2 should be the upper number parameter.)
def fibonacci(num1, num2):
    global count
    if count <= 19:
        newfibo = num1 + num2
        print(newfibo)
        num1 = num2 
        num2 = newfibo
        count += 1
        fibonacci(num1, num2)
    else:
        return
    
fibonacci(0,1)
print("\n \n")
# prints out the n-th fibonacci number.(input your desired fibonacci number) as the parameter.)
def F(n):
    if n<=1 :
        return n 
    else:
        return F(n-1) + F(n-2)
    
print(F(5))