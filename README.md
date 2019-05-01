# Encore

WIP - theatre audio cue player to experiment with gtk, gstreamer, Fedora SilverBlue and toolbox 

## Building on Fedore SilverBlue

```
toolbox enter
sudo dnf install ansible
ansible-playbook -K setup/playbook.yaml 
meson builddir
cd builddir
ninja
src/demo
```
