import geometry_utils

sdict={"circle_area":geometry_utils.circle_area,
      "rectangle_area":geometry_utils.rectangle_area,
      "triangle_area":geometry_utils.triangle_area}

print("Available shapes: circle, rectangle, triangle")
print("Available calculations: _area, _perimeter (e.g., circle_area)")

op=input("Enter the operation you want to perform: ")

if op=="circle_area":
    r = float(input("Enter radius: "))
    print(str(sdict.get(op)(r)))

elif op == "rectangle_area":
    h = float((input("Enter height: ")))
    w = float(input("Enter width: "))
    print(str(sdict.get(op)(w,h)))

elif op == "triangle_area":
    b = float(input("Enter base: "))
    w = float(input("Enter width: "))
    print(str(sdict.get(op)(b,w)))

else:
    print("invalid input")