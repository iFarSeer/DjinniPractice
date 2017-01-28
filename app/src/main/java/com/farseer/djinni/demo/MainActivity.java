package com.farseer.djinni.demo;

import android.support.v7.app.AppCompatActivity;
import android.os.Bundle;
import android.widget.TextView;

import com.ifarseer.crypt.Action;
import com.ifarseer.crypt.DataProcessor;
import com.ifarseer.crypt.ProcessCallBack;
import com.ifarseer.crypt.ResultData;
import com.ifarseer.crypt.SourceData;

import javax.annotation.Nonnull;

public class MainActivity extends AppCompatActivity {

    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        setContentView(R.layout.activity_main);

        // Example of a call to a native method
        final TextView tv = (TextView) findViewById(R.id.sample_text);
        tv.setText(stringFromJNI());
        DataProcessor processor = DataProcessor.create();
        byte[] buffer = "aaaa".getBytes();
        SourceData data = new SourceData(Action.DECRYPT, buffer, buffer.length);
        processor.process(data, new ProcessCallBack() {
            @Override
            public void onResult(@Nonnull ResultData data) {
                tv.setText(new String(data.getData()));
            }
        });
    }

    /**
     * A native method that is implemented by the 'native-lib' native library,
     * which is packaged with this application.
     */
    public native String stringFromJNI();

    // Used to load the 'native-lib' library on application startup.
    static {
        System.loadLibrary("native-lib");
    }
}
