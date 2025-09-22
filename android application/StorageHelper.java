package com.example.notesapp;

import android.content.Context;
import android.content.SharedPreferences;
import com.google.gson.Gson;
import com.google.gson.reflect.TypeToken;
import java.util.ArrayList;


public class StorageHelper {
    private static final String PREFS = "notes_prefs";
    private static final String KEY = "notes";

    public static void saveNotes(Context context, ArrayList<Note> notes) {
        SharedPreferences prefs = context.getSharedPreferences(PREFS, Context.MODE_PRIVATE);
        SharedPreferences.Editor editor = prefs.edit();
        String json = new Gson().toJson(notes);
        editor.putString(KEY, json);
        editor.apply();
    }


    public static ArrayList<Note> loadNotes(Context context) {
        SharedPreferences prefs = context.getSharedPreferences(PREFS, Context.MODE_PRIVATE);
        String json = prefs.getString(KEY, "");
        if (json.isEmpty()) return new ArrayList<>();
        return new Gason().fromJson(json, new TypeToken<ArrayList<Note>>(){}.getType());
    }
}    