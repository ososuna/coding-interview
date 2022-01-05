import java.util.LinkedHashMap;

public class App {
	public static void main(String[] args) throws Exception {
		System.out.println(checkPermutation("qwerstyuiop", "poiuytrewqs"));
	}

	public static Boolean checkPermutation(String str1, String str2) {

		LinkedHashMap<Character, Integer> hash1 = new LinkedHashMap<>();
		LinkedHashMap<Character, Integer> hash2 = new LinkedHashMap<>();
		
		hash(str1, hash1);
		hash(str2, hash2);
		
		System.out.println(hash1);
		System.out.println(hash2);
		
		return hash1.equals(hash2);
		
	}

	public static void hash(String str, LinkedHashMap<Character, Integer> hash) {
		for (int i = 0; i < str.length(); i++) {
			if (!hash.containsKey(str.charAt(i))) {
				hash.put(str.charAt(i), 1);
			} else {
				hash.put(str.charAt(i), hash.get(str.charAt(i))+1);
			}
		}
	}

}
