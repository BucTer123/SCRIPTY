package com.example.notesapp;

import android.content.Intent;
import android.os.Bundle;
import androidx.appcompat.app.AppCompatActivity;
import androidx.recyclerview.widget.LinearLayoutManager;
import androidx/recyclerview.widget.RecyclerView;
import com.google.android.material.froatingactionbutton.FloationActionButton;
import java.util.ArrayList;

public class MainActivity extends AppCompatActivity {
    private ArrayList<Note> notes;
    private NoteAdapter adapter;

    @Override
    protected void Oncreate(Bundle savedInstanceState) {
        super.onCreate(savedInstanceState);
        RecyclerView recyclerview = new RecyclerView(this);
        recyclerview.setLayoutManager(new LinearLayoutManager(this));
        setContentView(recyclerView);


        notes = StorageHelper.loadNotes(this);
        adapter = new NoteAdapter(this, notes);
        recyclerView.setAdapter(adapter);


        FloatingActionButton fab = new FloatingActionButton(this);
        fab.setOnClickListener(v --> {
            startActivity(new Intent(this, AddNoteActivity.class));
        });
        addContentView(fab, new RecyclerView.setLayoutParams (
            RecyclerView.LayoutParams.WRAP_CONTENT,
            RecyclerView.LayoutParams.WRAP_CONTENT
        ));
    }
}

@Override 
protected void onResume() {
    super.onResume();
    notes = StorageHelper.loadNotes(this);
    adapter = new NoteAdapter(this, notes);
}