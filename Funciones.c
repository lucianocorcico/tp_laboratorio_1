float sumar(float a, float b) //Se recibe dato a y dato b.
{
    return a+b; //Se realiza la suma de ambos datos, y se devuelve el resultado.
}

float restar(float a, float b) //Se recibe dato a y dato b.
{
    return a-b; //se realiza la resta de los datos ingresados y se devuelve el resultado.
}

float multiplicar(float a, float b) //se recibe dato a y dato b.
{
    return a*b; //se devuelve el resultado de la multiplicacion entre ambos numeros.
}

float dividir(float a, float b) //se recibe dato a y dato b.
{
    if(b == 0) //si el valor B es igual a cero, no se puede realizar la division.
        return -1;
    else //Si el valor es distinto de cero, se realiza la division y se devuelve el resultado.
        return a/b;
}

int factorial (int a) //se recibe dato a.
{
    int resultado = 1; //se declara un resultado igualado a uno en caso de que el dato recibido sea cero.
    int i;

    if(a >= 1) //se valida que el numero ingresado sea positivo.
    {
        for(i=1; i<=a; i++) //for que itera mientras el valor i es menor al dato recibido.
        {
            resultado *= i;
        }
        return resultado; //se devuelve el resultado de la operacion.
    }
    else
    {
        return resultado; //si no ingresa en el if, se devuelve 1.
    }
}
