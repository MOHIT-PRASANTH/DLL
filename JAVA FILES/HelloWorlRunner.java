package practice;

import java.io.UnsupportedEncodingException;
import java.nio.ByteBuffer;

public class HelloWorlRunner {
	public static void main(String[] args) throws UnsupportedEncodingException {
		   ByteBuffer name = ByteBuffer.wrap(("mohit").getBytes("ASCII"));
		   System.out.println( HelloWorld.hello(name).getString(0) );
		   HelloWorld.helloworld();
	}
}
