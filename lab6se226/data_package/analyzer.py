def calculate_mean(num_list):
    sum = 0
    total = 0
    for num in num_list:
        sum += num
        total += 1
    return sum / total

def find_maximum(num_list):
    max =0
    for x in num_list:
        if x > max:
            max =x

    return max

def find_minimum(num_list):
    min=num_list[0]
    for x in num_list:
        if x < min:
            min =x
    return min