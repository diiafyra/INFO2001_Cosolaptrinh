/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ex6;

/**
 *
 * @author DELL
 */
//import java.util.Scanner;
public class Ex6 {
    public static void main(String[] args) {
        System.out.println("Bảng mã ASCII");
        System.out.println("Dec\tBinary\t\tChar");
        System.out.println("----------------------------");

        //các ký tự từ 0-31 và 127 là các ký tự điều khiển
        for (int i = 0; i <= 127; i++) {
            String binary = Integer.toBinaryString(i);
            System.out.printf("%d\t%s\t\t%c\n", i, binary, (char) i);
        }
    }
}
