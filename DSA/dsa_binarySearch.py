def binary_search_iterative(data, target):
    low = 0
    high = (len(data) - 1)
    while low <= high:
        middle_element = (low + high) // 2
        if data[middle_element] == target:
            return True
        elif data[middle_element] > target:
            high = middle_element - 1
        else:
            low = middle_element + 1 
    return False

array = [1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
number = int(input("Enter the number you would like to look for in the given array: "))
print(binary_search_iterative(array, number))
print()

def binary_search_recursive(data, target, low, high):
    if low > high: 
        return False
    else:
        mid = (low + high) // 2
        if target == data[mid]:
            return True
        elif data[mid] > target:
            return binary_search_recursive(data, target, low, mid-1)
        else:
            return binary_search_recursive(data, target, mid+1, high)

print(binary_search_recursive(array, number, 0, (len(array) - 1)))