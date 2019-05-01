resources = gnome.compile_resources('resources', 'data/resources.xml',
                                     source_dir: 'data',
                                     c_name: 'resources')

executable('demo', 
           ['main.c'] + resources, 
           dependencies : gtkdep)
