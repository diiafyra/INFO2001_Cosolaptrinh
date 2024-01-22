/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex4;

/**
 *
 * @author DELL
 */
import java.util.Scanner;

public class Ex4 {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int a;
        System.out.print("Nhập số lượng phần tử: ");
        a = Integer.parseInt(scanner.nextLine());
        int i;
        float[]arr = new float[a];
        for(i=0; i<a; i++){
            System.out.printf("Nhập vào giá trị phần tử thu %d: ", i+1);
            arr[i] = Float.parseFloat(scanner.nextLine());
        }
        float max = arr[0], min=arr[0];
        for(i=1; i<a; i++){
            if(arr[i] > max){
                max = arr[i];
            }
        }
        System.out.println("Số lớn nhất: " +max);
        for(i=1; i<a; i++){
            if(arr[i] < min){
                min = arr[i];
            }
        }
        System.out.println("Số nho nhất: " +min);       
        // TODO code application logic here
    }
    
}
