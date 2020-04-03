package test;

import java.util.Scanner;

public class Max_ArraySum {

	public static int findSubArrayWithMaxSum(int[] array) {
		int flag = 0;
		if (array == null || array.length == 0) {
			return 0;
		}
		if (array.length == 1) {
			return array[0];
		}
		for (int i = 0; i < array.length; i++) {
			if (array[i] > 0) {
				flag = 1;
			}
		}
		if (flag == 1) {
			// ��ʼ���ۼ�ֵ�����ֵΪ�����һ��Ԫ��
			int sum = array[0];
			int maxSum = array[0];
			// ��¼����sum����ʼλ��
			int start = 0;
			// ��¼��ǰ���ֵ��Ӧ����ʼλ��
			int maxStart = 0;
			// ��¼��ǰ���ֵ��Ӧ����ֹλ��
			int maxEnd = 0;
			// ������ڶ�Ԫ�ؿ�ʼ����
			for (int i = 1; i < array.length; i++) {
				// �����ǰ�ۼ�ֵΪ���������������ۼӣ���Ϊ���ϵ�ǰԪ��ֵ��������ζ�����ȵ�ǰԪ�ص�ֵ��
				// ���Խ��ۼ�ֵ��������Ϊ��ǰԪ��ֵ�����ҽ���ʼλ�ø���Ϊ��ǰԪ�ص�λ��
				// �����Ϊ���������ۼӵ�ǰԪ��ֵ
				if (sum < 0) {
					sum = array[i];
					start = i;
				} else {
					sum += array[i];
				}

				// �����ǰ�ۼ�ֵ�������ֵ����������ֵ��ͬʱ�������ֵ��Ӧ����ʼ��ֹλ��
				if (sum > maxSum) {
					maxSum = sum;
					maxStart = start;
					maxEnd = i;
				}
			}

			// int[] result = new int[maxEnd - maxStart + 1];

			System.out.print("�������������Ϊ��");
			for (int i = maxStart; i <= maxEnd; i++) {
				// result[i - maxStart] = array[i];
				System.out.print("  " + array[i]);
			}
			System.out.println();

			return maxSum;
		} else
			return 0;

	}

	public static void main(String[] args) {
		// TODO �Զ����ɵķ������
		Scanner sc = new Scanner(System.in);
		while (true) {
			int count = sc.nextInt();
			sc.nextLine();
			int flag = 0;
			int[] array = new int[20];
			try {
				for (int i = 0; i < count; i++) {
					array[i] = sc.nextInt();
					if (array[i] > 0)
						flag = 1;
				}

				if (flag == 1) {
					int result = findSubArrayWithMaxSum(array);
					System.out.println("��������������ֵΪ��" + result);
				} else
					System.out.println("��������������ֵΪ��" + 0);

				/*
				 * for (int i : result) { System.out.print(i + " "); }
				 */

			} catch (Exception e) {
				// TODO: handle exception
				System.out.println("array is null or empty.");
			}

		}
	}
}
