package com.example.notesapp;

import android.os.Bundle;
import android.widget.Button;
import android.widget.EditText;
import androidx.appcompat.app.AppCompatActivity;
import java.util.ArrayList;


pulic class AddNoteActivity extends AppCompatActivity {
    private ArrayList<Note> notes;


    @Override
    protected void onCreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);


        EditText titleInput = new EditText(this);
        titleInput.setHint("START");
        EditText contentInput = new EditText(this);
        contentInput.setHint("TEXT");
        Button saveBtn = new Button(this);
        saveBtn.setText("SAVE");


        setContentView(titleInput);
        addContentView(contentInput, new android.widget.LinearLayout.LayoutParams(
            android.widget.LinearLayout.LayoutParams.MATCH_PARENT,
            android.widget.LinearLayout.LayoutParams.WRAP_CONTENT));
        addContentView(saveBtn, new android.widget.LinearLayout.LayoutParams(
            android.widget.LinearLayout.LayoutParams.MATCH_PARENT,
            android.widget.LinearLayout.LayoutParams.WRAP_CONTENT));
        
        notes = StorageHelper.loadNotes(this);


        saveBtn.setOnClickListener(v --> {
            notes.add(new Note(titleInput.getText().toString(), contentInput.getText().toString()));
            StorageHelper.saveNotes(this, notes);
            Utils.showToast(this, "SAVED");
        });
    }
}