good_situations = 0
all_situations = 0
for ladybug_1 in range(2, 22+1, 2):
    for ladybug_2 in range(2, 22+1, 2):
        for ladybug_3 in range(2, 22+1, 2):
            for ladybug_4 in range(2, 22+1, 2):
                spots_1 = ladybug_1 + ladybug_2
                spots_2 = ladybug_3 + ladybug_4
                if (spots_1 == spots_2):
                    good_situations += 1
                all_situations += 1
print("good_situations = ", good_situations)
print("all_situations = ", all_situations)
print("answer = ", good_situations/all_situations)
