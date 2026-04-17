def remove_duplicates(data_list):
    hl=[]
    for val in data_list:
        if val not in hl:
            hl.append(val)
    return hl

def  strip_whitespaces(string_list):
    return [s.strip() for s in string_list]