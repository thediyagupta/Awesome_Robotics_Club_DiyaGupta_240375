import math

L1 = 5.0
L2 = 10.0
L3 = 15.0

def r(x, y, z):
    d = math.sqrt(x**2 + y**2) - L1
    l = math.sqrt(d**2 + z**2)
    return l <= (L2 + L3)

def ik(x, y, z):
    a = math.atan2(y, x)
    d = math.sqrt(x**2 + y**2) - L1
    l = math.sqrt(d**2 + z**2)
    if not r(x, y, z):
        return None
    p = math.atan2(z, d)
    q = (L2**2 + l**2 - L3**2) / (2 * L2 * l)
    s = (L2**2 + L3**2 - l**2) / (2 * L2 * L3)
    q = max(min(q, 1.0), -1.0)
    s = max(min(s, 1.0), -1.0)
    b = math.acos(q)
    c = math.acos(s)
    f = p + b
    t = math.pi - c
    return (
        math.degrees(a),
        math.degrees(f),
        math.degrees(t)
    )

def ts():
    T = [
        ("T1", (15, 5, -10)),
        ("T2", (6, 0, -1)),
        ("T3", (28, 0, 0)),
        ("T4", (35, 0, 0)),
        ("T5", (10, 0, -25)),
    ]
    for _, (l, (x, y, z)) in enumerate(T):
        print(f"\n{l}")
        print(f"x={x}, y={y}, z={z}")
        A = ik(x, y, z)
        if A:
            a, b, c = A
            print(f"α={a:.2f}, β={b:.2f}, γ={c:.2f}")
            print("R")
        else:
            print("N/A")
            print("U")

if __name__ == "__main__":
    ts()
