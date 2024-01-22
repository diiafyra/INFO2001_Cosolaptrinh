/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex5;

/**
 *
 * @author DELL
 */
import java.util.Scanner;
public class Ex5 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a;
        while(true){
            try{
                System.out.print("Nhập vào số lượng phần tử: ");
                a = Integer.parseInt(scanner.nextLine());
                break;
            } catch (NumberFormatException e){
                System.out.print("Hãy nhập vào số nguyên.");
            }
        // TODO code application logic here
        }
        double[]arr = new double[a];
        int i;
        double sum=0;
        for(i=0; i<a; i++){
            System.out.print("Nhap vao gia tri phan tu; ");
            while(true){
                try{
                    arr[i] = Double.parseDouble(scanner.nextLine());
                    break;
                }
                catch(NumberFormatException e){
                    System.out.print("Hãy nhập vào số thực: ");
                }
            }
            sum = sum + arr[i];
        }
        System.out.print("TBC: " +sum/a);
    }
}
