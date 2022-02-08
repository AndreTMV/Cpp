def llenarLista(size):
    array:list = list(int(size) for size in input().strip().split())[:size]
    return array

def main():
    n = int(input())
    arreglo = llenarLista(n)
    print(max(arreglo))

if __name__ == "__main__":
    main()
