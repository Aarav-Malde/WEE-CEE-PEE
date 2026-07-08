# pip install pycuber

import pycuber as pc # type: ignore


def sequence_order(alg, max_iterations=10_000_000):
    """
    Returns the order of a Rubik's Cube algorithm.
    The order is the smallest positive integer n such that
    applying the algorithm n times returns the cube to solved.
    """

    solved = pc.Cube()
    cube = pc.Cube()

    formula = pc.Formula(alg)

    for i in range(1, max_iterations + 1):
        cube(formula)

        if cube == solved:
            return i

    return None


if __name__ == "__main__":
    alg = input("Enter algorithm: ").strip()

    order = sequence_order(alg)

    if order is None:
        print("Order not found within limit.")
    else:
        print(f"Order = {order}")