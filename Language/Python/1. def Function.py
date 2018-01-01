def merge_sort(list):
    if len(list) <= 1:
        return list

    sub1 = merge_sort(list[:round(len(list) / 2)])
    sub2 = merge_sort(list[round((len(list) / 2)):])

    result = []

    for i in range(0, len(sub1) + len(sub2)):
        if len(sub1) == 0:
            return result + sub2
        elif len(sub2) == 0:
            return result + sub1

        if (sub1[0] >= sub2[0]):
            result.append(sub2[0]), sub2.pop(0)
        else:
            result.append(sub1[0]), sub1.pop(0)

    return result

print(merge_sort([2, 3, 1, 9, 0]))