Array = [7685, 12345, 45, 123, 90, 1, 432.23, 90998, 125, 456, 124, 78, 13212121, 190383, 2353, 8920]
def IsListEven(my_list):
 
    flags = False
 
    for i in range(len(my_list)):
 
        if my_list[i] % 2 == 0: 
            flags = True
            print("Yes given list has even numbers.")
            break
    print(flags)



#  Python3 Program to check if a number is prime or not
 
num =13
flag = False
 
if num == 1:
    print(num, "NOT A PRIME")
elif num > 1:
    for i in range(2, num):
        if (num % i) == 0:
            flag = True
            break

    if flag:
        print("NOT A PRIME")
    else:
        print("PRIME")


#my own implementation of the bubble sort algorithm since i could not understand all the other codes.
lens = len(Array)
for j in range(0, lens-1):
    for i in range(0, lens-1):
        if Array[i] > Array[i + 1]:
            Array[i + 1], Array[i] = Array[i], Array[i+1]

#print(Array)

def bubble_sort_algorithm(unsorted_array):
    x = len(unsorted_array)
    for i in range(0, x-1):
        for i in range(0, x-1):
            if unsorted_array[i] > unsorted_array[i+1]:
                unsorted_array[i+1], unsorted_array[i] = unsorted_array[i], unsorted_array[i+1]
    return unsorted_array

print(bubble_sort_algorithm(unsorted_array=Array))