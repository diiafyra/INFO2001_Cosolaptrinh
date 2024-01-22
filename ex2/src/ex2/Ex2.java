/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex2;

/**
 *
 * @author DELL
 */
import java.util.Scanner;

public class Ex2 {

   public static void main(String[] args) 

  {

        Scanner scanner;
       scanner = new Scanner(System.in);
int a;
while (true)
{
    try
    {
        System.out.print("Nhập số nguyên a: ");
        a = Integer.parseInt(scanner.nextLine());
        break;
    }
    catch (NumberFormatException e)
    {
        System.out.println("Định dạng không hợp lệ. Vui lòng nhập lại.");
    }
}// while

int reverseA=0;
while (a != 0){
    int digit = a % 10;
    reverseA = reverseA*10 + digit;
    a = a/10;
}
System.out.println("Số đảo ngược là: " + reverseA);
}
}

/*int sum = a + b;
int difference = a - b;
int product = a * b;

System.out.println("Tổng: " + sum);
System.out.println("Hiệu: " + difference);
System.out.println("Tích: " + product);

if (b != 0)
{
    int quotient_integer = a / b;
    float quotient_float = (float) a / b;

    System.out.println("Thương (số nguyên): " + quotient_integer);
    System.out.println("Thương số thực: " + quotient_float);
}    }//main*/