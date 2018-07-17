package practice;
import com.sun.jna.Library;
import com.sun.jna.Native;
import com.sun.jna.NativeLibrary;
import com.sun.jna.Pointer;
import java.nio.ByteBuffer;

public class HelloWorld implements Library{
	public static final String JNA_LIBRARY_NAME = "HelloWorld";
	public static final NativeLibrary JNA_NATIVE_LIB = NativeLibrary.getInstance(HelloWorld.JNA_LIBRARY_NAME);
	static {
		Native.register(HelloWorld.JNA_LIBRARY_NAME);
	} 
   public static native Pointer hello(ByteBuffer user);
   public static native void helloworld();
}