# Edgar Perez
# CSC 3110 – Program 3: The Perfect Storm
# November 12, 2025
# Pledge: I have neither given nor received unauthorized aid on this program.
#
# This program asks the user for a wind speed, either mph or km/h
# and converts it to the other unit. Then it tells what kind of storm
# it would be on both the hurricane and typhoon scales.

# 1 km/h = 0.621371 mph
KM_TO_MILES = 0.621371

# ask the user which unit they're entering
unit = input("Do you want to enter miles/hour or km/hour? (type m or k): ").strip().lower()

# get speed and convert it
if unit == "m":
    try:
        mph = float(input("Enter the wind speed in miles/hour: ").strip())
    except ValueError:
        print("Invalid wind speed. Please enter a numeric value.")
        exit()
    kmh = mph / KM_TO_MILES
elif unit == "k":
    try:
        kmh = float(input("Enter the wind speed in km/hour: ").strip())
    except ValueError:
        print("Invalid wind speed. Please enter a numeric value.")
        exit()
    mph = kmh * KM_TO_MILES
else:
    print("Invalid input. Please type 'm' or 'k'.")
    exit()

# figure out hurricane category, mph scale
if mph < 39:
    hurricane = "tropical depression"
elif mph < 74:
    hurricane = "tropical storm"
elif mph < 96:
    hurricane = "Category 1 hurricane"
elif mph < 111:
    hurricane = "Category 2 hurricane"
elif mph < 130:
    hurricane = "Category 3 hurricane"
elif mph < 157:
    hurricane = "Category 4 hurricane"
else:
    hurricane = "Category 5 hurricane"

# figure out typhoon category, km/h scale
if kmh < 63:
    typhoon = "tropical depression"
elif kmh < 88:
    typhoon = "tropical storm"
elif kmh < 118:
    typhoon = "severe tropical storm"
elif kmh < 150:
    typhoon = "typhoon"
elif kmh < 185:
    typhoon = "severe typhoon"
else:
    typhoon = "super typhoon"

# print results with some rounding
print(f"\nThis is {kmh:.2f} km/hr and {mph:.2f} mph.")
print(f"On the hurricane scale, this is a {hurricane}.")
print(f"On the typhoon scale, this is a {typhoon}.")
