# Binary Search in Python

def binary_search(array, target):
    left = 0
    right = len(array) - 1

    while left <= right:
        middle = round((left + right) / 2)
        if target == array[middle]:
            return middle
        if target > array[middle]:
            left = middle + 1
        else: right = middle - 1

    return -1


def main():
    array = [10, 18, 25, 34, 41, 59, 60, 77, 86, 99]
    target = 77
    print(binary_search(array, target))


if __name__ == "__main__":
    main()
