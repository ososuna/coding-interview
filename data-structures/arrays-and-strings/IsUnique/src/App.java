import java.util.LinkedHashMap;

public class App {
	public static void main(String[] args) throws Exception {
		System.out.println(isUnique("qwertyuiopasdfghjkl;zxcvbnm"));
	}
			
	public static Boolean isUnique(String str) {
		
		LinkedHashMap<Character, Integer> hash = new LinkedHashMap<>();
		
		for (int i = 0; i < str.length(); i++) {
			if (!hash.containsKey(str.charAt(i))) {
				hash.put(str.charAt(i), 1);
			} else {
				// hash.put(str.charAt(i), hash.get(str.charAt(i))+1 );
				return false;
			}
		}
		return true;
	}
}
