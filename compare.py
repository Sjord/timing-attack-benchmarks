import time
from timeit import default_timer

secret = "1715762622-Mb12K2Epbm46OhMOmzhrBOueEPxCMB"
len_secret = len(secret)
result = True

print("# (Changed character index) (time in nanosecond per comparison)")

for x in range(len_secret):
    input_str = list(secret)
    input_str[x] = '0'
    input_str = ''.join(input_str)

    start = default_timer()
    for _ in range(int(1e8)):
        result = input_str == secret
    end = default_timer()

    print(f"{x} {10 * (end - start):.9f}")

print(f"# result: {result}")
