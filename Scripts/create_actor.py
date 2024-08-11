import unreal

def create_actor():
    # Get the world editor context
    editor_world = unreal.EditorLevelLibrary.get_editor_world()
    
    # Create an actor of type StaticMeshActor
    actor_location = unreal.Vector(0, 0, 0)
    actor_rotation = unreal.Rotator(0, 0, 0)
    new_actor = unreal.EditorLevelLibrary.spawn_actor_from_class(unreal.StaticMeshActor, actor_location, actor_rotation)

    # Print actor details
    unreal.log("New Actor created: {}".format(new_actor.get_name()))

if __name__ == "__main__":
    create_actor()
