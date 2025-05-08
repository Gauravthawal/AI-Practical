# Function to perform Selection Sort
def selection_sort(arr):
    n = len(arr)
    for i in range(n - 1):
        min_index = i

        # Find the minimum element in the unsorted part
        for j in range(i + 1, n):
            if arr[j] < arr[min_index]:
                min_index = j

        # Swap the found minimum with the first element
        if min_index != i:
            arr[i], arr[min_index] = arr[min_index], arr[i]

# Function to print the array
def print_array(arr):
    for num in arr:
        print(num, end=' ')
    print()

# Main part
arr = [64, 25, 12, 22, 11]

print("Original array:", end=' ')
print_array(arr)

selection_sort(arr)

print("Sorted array using Greedy (Selection Sort):", end=' ')
print_array(arr)
