#my own implementation of selection sort algorithm
'''selects smallest element in a given array'''
"""array = [21,4,32,65,322,9876,912,901,1234,789,12,456,112,908,12341,62,912,180]
min_element = 0
for i in range(0, len(array)-1):
    if array[i] < array[min_element]:
        min_element = i
        for j in range(i+1, len(array)):
            if array[j] < array[min_element]:
                array[j], array[min_element] = array[min_element], array[j]

print(array)
"""
array = [21,4,32,65,322,9876,912,901,1234,789,12,456,112,908,12341,62,912,180]
for i in range(0, len(array)-1):
    min_element = i
    for j in range(i+1, len(array)):
        if array[j] < array[min_element]:
            min_element = j

    array[i], array[min_element] = array[min_element], array[i]

print(array)