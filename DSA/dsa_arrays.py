# An array is a data structure used to store multiple elements.
#an algorithm can be used to look through an array to find the lowest value
my_array = [3, 56, 12, 43, 2, 45, 87, 39, 12, 32, 1243, 57, 46, 85, 2432, 68, 32, 78, -1]
minimumValue = my_array[0]
#print(minimumValue)

for i in my_array:
    if i < minimumValue:
        minimumValue = i
    
print(minimumValue)
#to find the largest number in the array swap out the '<' with '>'
'''algorithm time complexity quantifies the amount of time taken by an algorithm
to run as a function of the length of the input'''