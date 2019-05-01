#include<gtk/gtk.h>
#include "resources.h"

static void
print_hello (GtkWidget *widget,
             gpointer   data)
{
  g_print ("Hello World\n");
}

int
main (int   argc,
      char *argv[])
{
  GtkBuilder *builder, *e1;
  GObject *window;
  GObject *button;
  GObject *entry; 
  GObject *vb2;
  GError *error = NULL;

  gtk_init (&argc, &argv);

  /* Construct a GtkBuilder instance and load our UI description */
  builder = gtk_builder_new_from_resource ("/uk/me/pdkk/encore/encore.ui");

  /* Connect signal handlers to the constructed widgets. */
  window = gtk_builder_get_object (builder, "window");
  g_signal_connect (window, "destroy", G_CALLBACK (gtk_main_quit), NULL);


  button = gtk_builder_get_object (builder, "button1");
  g_signal_connect (button, "clicked", G_CALLBACK (print_hello), NULL);

  e1 = gtk_builder_new_from_resource ("/uk/me/pdkk/encore/entry.ui");
  entry = gtk_builder_get_object (e1, "hbox1");
  vb2 = gtk_builder_get_object (builder, "vbox2");
  gtk_container_add(GTK_CONTAINER(vb2), entry);
  
  gtk_main ();

  return 0;
}