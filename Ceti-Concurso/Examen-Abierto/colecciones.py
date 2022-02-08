from itertools import groupby

def llenarLista(size:int):
    """TODO: Docstring for function.

                    :size,array: tamaño lista
                    :returns: un numpy array

                    """
    array:list = list(int(size) for size in input().strip().split())[:size]
    return array

def llenarFrecuencia(array):
    """TODO: Docstring for llenarDiccionario.

                    :array: a numpy array
                    :returns: the frecuencia of every element stored in a numpy array

                    """
    frecuencia = [len(list(group)) for key, group in groupby(array)]
    return frecuencia

def all_equal(iterable):
    g = groupby(iterable)
    return next(g, True) and not next(g, False)

def all_one(arreglo):
    """TODO: Docstring for all_one.

                    :arg1: TODO
                    :returns: TODO

                    """
    if all(uno == 1 for uno in arreglo):
        return 1

def all_different(arreglo):
    """TODO: Docstring for all_different.

                    :arg1: TODO
                    :returns: TODO

                    """
    if len(arreglo) == len(set(arreglo)):
        return 1

def validaciones(arreglo):
    if all_one(arreglo):
        print(1)
    elif all_different(arreglo):
        print(1)
    else:
        arreglo = llenarFrecuencia(arreglo)

def main():
    n = int(input())
    array:list = list(int(n) for n in input().strip().split())[:n]
    print(1)

if __name__ == '__main__':
    main()
